/*---------------------------------------------------------------------------*\
 This file is part of the Fab@Home Project.
 Fab@Home operates under the BSD Open Source License.

 Copyright (c) 2009, Karl Gluck (kwg8@cornell.edu)

 All rights reserved.

 Redistribution and use in source and binary forms, with or without
 modification, are permitted provided that the following conditions are met:
     * Redistributions of source code must retain the above copyright
       notice, this list of conditions and the following disclaimer.
     * Redistributions in binary form must reproduce the above copyright
       notice, this list of conditions and the following disclaimer in the
       documentation and/or other materials provided with the distribution.
     * Neither the name of the <organization> nor the
       names of its contributors may be used to endorse or promote products
       derived from this software without specific prior written permission.

 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNERS OR CONTRIBUTORS BE LIABLE
 FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
\*---------------------------------------------------------------------------*/
#pragma once

#include <QObject>
#include <QSharedPointer>
#include <QtScript>
#include "shared/slicer/slicer.h"
#include "toolscriptinterface.h"
#include "slicestacktsi.h"



class AMFFileTSI;



/**
 * Represents the Tool Script Interface (TSI) for the Slicer
 */
class SlicerTSI : public ToolScriptInterface {
  Q_OBJECT

public:
  SlicerTSI(QScriptEngine& engine,
            SlicerProgressCallback* callback);
//
//  /**
//   * Slices the region using the current parameters, then returns a newly-
//   * allocated slice stack containing the result (or null if there was an
//   * error).
//   */
//  SliceStack* doSlicing(AMFRegion* region);

public slots:
  void setSliceHeight(double v);
  void alignTray();
  void alignTop();
  void alignBottom();
  void alignCenter();

  /**
   * Returns a SliceStackTSI to the calling script, or throws an error in the
   * script's engine if something went wrong.
   */
  QScriptValue doSlicing(QScriptValue amf_region);
  
  

private:
  QSharedPointer<Slicer> slicer_;
  SlicerProgressCallback* callback_;
};
