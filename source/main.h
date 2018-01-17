#ifndef MAIN_H__
#define MAIN_H__

#include "c4d_basedocument.h"
#include "painting/advanced/registeradvancedpaint.h"

Bool RegisterSN();
Bool RegisterGradient();
Bool RegisterBitmap();
Bool RegisterMandelbrot();
Bool RegisterSimpleMaterial();
Bool RegisterParticleVolume();
Bool RegisterMenuTest();
Bool RegisterAsyncTest();
Bool RegisterActiveObjectDlg();
Bool RegisterPGPTest();
Bool RegisterListView();
Bool RegisterSubDialog();
Bool RegisterSpherify();
Bool RegisterRoundedTube();
Bool RegisterTriangulate();
Bool RegisterVPTest();
Bool RegisterVPInvertImage();
Bool RegisterBlinker();
Bool RegisterAtomObject();
Bool RegisterCircle();
Bool RegisterGLTestObject();
Bool RegisterGLTestMaterial();
void FreeGLTestObject();
Bool RegisterSTL();
Bool RegisterBFF();
Bool RegisterLookAtCamera();
Bool RegisterGravitation();
Bool RegisterThreshold();
Bool RegisterSampleMatrix();
Bool RegisterPrimitiveTool();
Bool RegisterMorphMixer();
Bool RegisterVPVisualizeNormals();
Bool RegisterVPVisualizeChannel();
Bool RegisterVPReconstruct();
Bool RegisterExampleDataType();
Bool RegisterMemoryStat();
Bool RegisterEdgeCutTool();
Bool RegisterPickObjectTool();
Bool RegisterReverseNormals();
Bool RegisterLayerShaderBrowser();
Bool RegisterPainterSaveTest();
Bool RegisterRandomFalloff();
Bool RegisterNoiseEffector();
Bool RegisterDropEffector();
Bool RegisterDeformerObject();
Bool RegisterForceObject();
Bool RegisterCollisionObject();
Bool RegisterConstraintObject();
Bool RegisterGrassObject();
Bool RegisterShader();
Bool RegisterVideopost();
Bool RegisterStylingTag();
Bool RegisterRenderingTag();
Bool RegisterGeneratorObject();
Bool RegisterExampleSNHook();
void FreeExampleSNHook();
Bool RegisterStereoVideoPost();
void MiscTest();
void MiscDelegateTest();
void MaxonArrayTest();
void MoveCopyConstructorSample();
Bool RegisterSculptingTool();
Bool RegisterSculpt();
Bool RegisterSculptPullBrush();
Bool RegisterSculptCubesBrush();
Bool RegisterSculptDrawPolyTool();
Bool RegisterSculptSelectionBrush();
Bool RegisterSculptGrabBrush();
Bool RegisterSculptDrawPolyBrush();
Bool AddUndo(BaseDocument* doc, AtomArray* arr, UNDOTYPE type);
Bool RegisterSnapTool();
Bool RegisterSculptDeformer();
Bool RegisterSculptModifiers();
Bool RegisterSculptBrushTwist();
Bool RegisterSculptBrushMultiStamp();
Bool RegisterSnapDataNullSnap();
Bool RegisterCustomGUIString();
Bool RegisterCustomDatatypeCustomGUI();
Bool RegisterExampleDialogCommand();
Bool RegisterObjectDynamicDescription();
Bool RegisterSculptBrushSpline();
Bool RegisterGetSetDParameterExample();
Bool RegisterTakeTestCommmands();
Bool RegisterPolygonReductionTest();
Bool RegisterPlaneByPolygons();
Bool RegisterGreekTemple();
Bool RegisterHeartShape();
Bool RegisterLatticePlane();
Bool RegisterLoftedMesh();
Bool RegisterPorcupine();
Bool RegisterRevolvedMesh();
Bool RegisterRuledMesh();
Bool RegisterParticlesShuffling();
Bool RegisterVertexHandle();
Bool RegisterObjectHyperFileExample();

void CommandLineRendering(C4DPL_CommandLineArgs* args);

#endif // MAIN_H__
