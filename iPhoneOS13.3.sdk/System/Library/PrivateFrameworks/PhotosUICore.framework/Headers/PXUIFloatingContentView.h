//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIFloatingContentView.h>

#import <PhotosUICore/PXAdjustableContentsView-Protocol.h>

@interface PXUIFloatingContentView : _UIFloatingContentView <PXAdjustableContentsView>
{
    CGRect _contentsRect;
}

@property(nonatomic) CGRect contentsRect; // @synthesize contentsRect=_contentsRect;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (BOOL)canBecomeFocused;

@end

