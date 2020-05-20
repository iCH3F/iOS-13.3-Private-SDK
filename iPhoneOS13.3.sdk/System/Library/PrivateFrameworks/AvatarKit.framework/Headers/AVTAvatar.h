//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarKit/AVTPhysicsControllerDelegate-Protocol.h>

@class AVTEyeSkinningDescriptor, AVTPhysicsController, AVTPupilReflectionCorrectionDescriptor, CAAnimation, MISSING_TYPE, NSMutableArray, NSMutableDictionary, SCNAnimationPlayer, SCNNode, SCNPhysicsWorld;

@interface AVTAvatar : NSObject <AVTPhysicsControllerDelegate, NSCopying>
{
    SCNNode *_avatarNode;
    SCNNode *_skeleton;
    SCNNode *_headNode;
    SCNNode *_leftEye;
    SCNNode *_rightEye;
    SCNNode *_neckNode;
    SCNNode *_neckPivotNode;
    CDStruct_b01a1f36 _morphInfoFromARKitBlendShapeIndex;
    CDStruct_b01a1f36 _friendlyPoseMorphInfos;
    NSUInteger _friendlyPoseMorphInfoCount;
    int _transitionCount;
    BOOL _arMode;
    BOOL _optimizedForSnapshot;
    SCNPhysicsWorld *_physicsWorld;
    AVTPhysicsController *_physicsController;
    NSMutableArray *_clipsPlaying;
    struct SCNVector3 _lookAt;
    NSMutableArray *_correctiveMorpherDescriptors;
    NSMutableArray *_physicalizedMorpherDescriptors;
    NSMutableArray *_physicalizedSkeletonDescriptors;
    NSMutableArray *_morpherDrivenMaterialDescriptors;
    AVTPupilReflectionCorrectionDescriptor *_pupilReflectionCorrectionDescriptor;
    AVTEyeSkinningDescriptor *_eyeSkinningDescriptor;
    NSMutableDictionary *_morpherWeightRemappingDescriptors;
    NSMutableDictionary *_morpherWeightThresholdDescriptors;
    NSMutableDictionary *_morpherWeightThresholdStates;
    MISSING_TYPE *_arOffset;
    float _arScale;
    double _physicsScaleFactor;
    double _lastRenderTime;
    CAAnimation *_bakedAnimation;
    SCNAnimationPlayer *_bakedAnimationPlayer_lazy;
}

+ (id)avatarWithDataRepresentation:(id)arg1 error:(id )arg2;
+ (unsigned char)classIdentifier;
+ (BOOL)canLoadDataRepresentation:(id)arg1;
+ (BOOL)canLoadDataRepresentationWithVersion:(unsigned short)arg1 minimumCompatibleVersion:(unsigned short)arg2 error:(id )arg3;
+ (void)preloadAvatar:(id)arg1;
+ 
// - (void).cxx_destruct;
- (id)stickerPhysicsStateIdentifier;
- (double)physicsController:(id)arg1 downforceForNodeNamed:(id)arg2;
- (id)physicsWorldForPhysicsController:(id)arg1;
- (id)avatarNodeForPhysicsController:(id)arg1;
- (id)arTechniqueName;
- (BOOL)hasCustomARTechnique;
- (void)update;
- (BOOL)_decode:(id)arg1 error:(id )arg2;
- (void)_encode:(id)arg1;
- (id)dataRepresentation;
// - (id)copyWithZone:(_NSZone )arg1;
- (UIImage )snapshotWithSize:(CGSize)arg1 scale:(double)arg2 options:(id)arg3;
- (void)stopTransitionAnimation;
- (void)transitionFromPose:(id)arg1 toPose:(id)arg2 duration:(double)arg3 delay:(double)arg4 completionHandler:(id /* CDUnknownBlockType */)arg5;
- (void)animatePhysicsScaleFactor:(double)arg1 duration:(double)arg2;
- (void)setPhysicsScaleFactor:(double)arg1;
- (BOOL)isTransitioning;
- (id)debugPoseJSONRepresentation;
- (void)setPose:(id)arg1;
- (id)pose;
- (void)_resetFaceToRandomPosition;
- (void)setupFaceTracking;
- (long long)blendShapeIndexForBlendShapeName:(id)arg1;
- (id)blendShapeNameForBlendShapeIndex:(NSUInteger)arg1;
- (CDStruct_b01a1f36)morphInfoForARKitBlendShapeIndex:(NSUInteger)arg1;
- (void)applyHeadPoseWithTrackingInfo:(id)arg1 gazeCorrection:(BOOL)arg2;
- (void)applyHeadPoseWithTrackingInfo:(id)arg1;
- (void)applyHeadPoseWithTrackingInfo:(id)arg1 gazeCorrection:(BOOL)arg2 pointOfView:(id)arg3;
- (void)applyBlendShapesWithTrackingInfo:(id)arg1;
- (void)setupMorphInfoForChangeInSubHierarchy;
- (void)setupMorphInfo;
- (id)effectiveMorphedNodeForTargetName:(id)arg1 candidateNode:(id)arg2;
- (void)updateAfterAnimationsEvaluatedAtTime:(double)arg1 renderer:(id)arg2;
- (void)renderer:(id)arg1 didApplyAnimationsAtTime:(double)arg2;
- (void)didAddToScene:(id)arg1;
- (void)willRemoveFromScene:(id)arg1;
- (void)updateEyeOrientationAndReflections;
- (void)setupEyeOrientationAndReflections;
- (BOOL)usesSkinningForEyeOrientation;
- (void)updateMorpherDrivenMaterialsWithDeltaTime:(double)arg1;
- (void)removeMorpherDrivenMaterialsInHierarchy:(id)arg1;
- (void)addMorpherDrivenMaterialsInHierarchy:(id)arg1;
- (void)resetMorpherDrivenMaterials;
- (void)applyWeightWithThresholdingForLocation:(id)arg1 weight:(float)arg2 morphInfo:(CDStruct_b01a1f36)arg3;
- (float)thresholdedWeightAtLocation:(id)arg1 sourceWeight:(float)arg2 time:(double)arg3;
- (void)resetThresholdingStates;
- (void)addMorpherWeightThresholdings;
- (void)resetMorpherWeightThresholdings;
- (void)addMorpherWeightRemappings;
- (void)resetMorpherWeightRemappings;
- (void)applyCorrectiveDescriptors;
- (void)removeCorrectiveDescriptorsInHierarchy:(id)arg1;
- (void)addCorrectiveDescriptorsInHierarchy:(id)arg1;
- (void)resetCorrectiveDescriptors;
- (void)evaluatePhysicalizedDescriptors;
- (void)removePhysicalizedDescriptorsInHierarchy:(id)arg1;
- (void)addPhysicalizedDescriptorsInHierarchy:(id)arg1 ignoreUpperNodes:(BOOL)arg2;
- (void)resetPhysicalizedDescriptors;
- (id)descriptorsByRemovingDescriptors:(id)arg1 inHierarchy:(id)arg2 passingTest:(id /* CDUnknownBlockType */)arg3;
- (void)removeMorphingSkinningControllersInHierarchy:(id)arg1;
- (void)addMorphingSkinningControllersInHierarchy:(id)arg1;
- (void)resetMorphingSkinningControllers;
- (void)removeCustomBehavioursInHierarchy:(id)arg1;
- (void)addCustomBehavioursInHierarchy:(id)arg1;
- (void)resetCustomBehaviours;
- (void)updateBindingsOfNode:(id)arg1;
- (void)updateBindings;
- (void)lookAt:(struct SCNVector3)arg1;
- (void)lookAt:(struct SCNVector3)arg1 withDuration:(double)arg2;
- (struct SCNVector3)currentLookAt;
- (void)rotateHead:(double)arg1;
- (float)applyWeightRemapForLocation:(id)arg1 weight:(float)arg2;
- (void)resetARModeBehaviours;
@property(nonatomic) BOOL arMode;
- (void)_updateShaderModifier:(id)arg1 forARMode:(BOOL)arg2 withOnTopMask:(BOOL)arg3;
- (id)bakedAnimationPlayer;
- (id)bakedAnimationCopy;
- (void)resumeBakedAnimation;
- (void)pauseBakedAnimation;
- (void)setBakedAnimationReferenceTime:(double)arg1;
@property(readonly) SCNNode *avatarNode;
@property(readonly) SCNNode *neckNode;
@property(readonly) SCNNode *headNode;
- (id)cameraNode;
- (id)lightingNode;
- (void)resetToPhysicsState:(id)arg1;
- (id)physicsState;
- (void)setupPhysicsIfNeeded;
- (void)physicsSpecializationSettingsDidChange;
- (double)physicsDownforceForNodeNamed:(id)arg1;
- (float)arScale;
- (MISSING_TYPE *)arOffset;
- (void)dealloc;
- (id)init;
- (void)avatarCommonInit;
- (void)setOptimizeForSnapshot:(BOOL)arg1;
- (BOOL)optimizeForSnapshot;

@end

