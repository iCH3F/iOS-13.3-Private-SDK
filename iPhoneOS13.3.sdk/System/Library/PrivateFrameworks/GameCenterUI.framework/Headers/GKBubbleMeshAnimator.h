//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSMutableSet;

@interface GKBubbleMeshAnimator : NSObject
{
    NSMutableSet *_animatingViews;
    CADisplayLink *_displayLink;
    double _lastUpdateTime;
}

+ (id)sharedAnimator;
@property(nonatomic) double lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
@property(nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) NSMutableSet *animatingViews; // @synthesize animatingViews=_animatingViews;
- (void)update:(id)arg1;
- (void)removeAnimatingBubbleView:(id)arg1;
- (void)addAnimatingBubbleView:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)dealloc;
- (id)init;

@end

