//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXCuratedLibraryLayoutAnimationHelper.h>

@interface _PXCuratedLibraryLayoutSkimmingSlideshowAnimationHelper : PXCuratedLibraryLayoutAnimationHelper
{
    NSUInteger _userInterfaceDirection;
    struct PXSimpleIndexPath _fromIndexPath;
    struct PXSimpleIndexPath _toIndexPath;
}

- (void)_adjustGeometries:(inout CDStruct_3ab912e1 )arg1 styles:(inout CDStruct_506f5052 )arg2 infos:(inout CDStruct_9d1ebe49 )arg3 spriteIndexRange:(struct _PXGSpriteIndexRange)arg4 appearing:(BOOL)arg5;
- (void)animation:(id)arg1 adjustGeometries:(inout CDStruct_3ab912e1 )arg2 styles:(inout CDStruct_506f5052 )arg3 infos:(inout CDStruct_9d1ebe49 )arg4 forSpriteDisappearingFromRootIndexRange:(struct _PXGSpriteIndexRange)arg5;
- (void)animation:(id)arg1 adjustGeometries:(inout CDStruct_3ab912e1 )arg2 styles:(inout CDStruct_506f5052 )arg3 infos:(inout CDStruct_9d1ebe49 )arg4 forSpriteAppearingIntoRootIndexRange:(struct _PXGSpriteIndexRange)arg5;
- (id)animation:(id)arg1 doubleSidedAnimatedSpriteIndexesForModifiedSpriteIndexes:(id)arg2 rootLayout:(id)arg3 presentedGeometries:(const CDStruct_3ab912e1 )arg4 styles:(const CDStruct_506f5052 )arg5 infos:(const CDStruct_9d1ebe49 )arg6;
- (BOOL)_shoulAnimateSpriteWithInfo:(const CDStruct_9d1ebe49 )arg1 matchingSectionIndexPath:(struct PXSimpleIndexPath)arg2 spriteKind:(out unsigned char )arg3;
- (double)animationDuration;
- (long long)animationCurve;
- (BOOL)wantsDoubleSidedAnimations;
- (void)setUserData:(id)arg1;
- (id)initWithLayout:(id)arg1;

@end

