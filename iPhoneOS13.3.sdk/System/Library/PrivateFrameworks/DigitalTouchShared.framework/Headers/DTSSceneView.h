//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpriteKit/SKView.h>

@interface DTSSceneView : SKView
{
    BOOL _shouldDelayLayout;
    BOOL _didDelayLayout;
}

- (void)layoutSubviews;
- (void)_updateLayout;
- (void)_applicationDidBecomeActive;
- (void)_applicationWillEnterForeground;
- (void)_applicationDidEnterBackground;
- (id)initWithFrame:(CGRect)arg1;

@end

