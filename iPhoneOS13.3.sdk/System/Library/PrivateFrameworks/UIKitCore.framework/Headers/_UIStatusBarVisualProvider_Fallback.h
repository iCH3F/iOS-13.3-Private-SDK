//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIStatusBarVisualProvider-Protocol.h>

@class NSArray, _UIStatusBar;

__attribute__((visibility("hidden")))
@interface _UIStatusBarVisualProvider_Fallback : NSObject <_UIStatusBarVisualProvider>
{
    _UIStatusBar *_statusBar;
    NSArray *_placements;
}

+ (CGSize)intrinsicContentSizeForOrientation:(long long)arg1;
@property(retain, nonatomic) NSArray *placements; // @synthesize placements=_placements;
@property(nonatomic) __weak _UIStatusBar *statusBar; // @synthesize statusBar=_statusBar;
// - (void).cxx_destruct;
- (id)styleAttributesForStyle:(long long)arg1;
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1;
- (id)setupInContainerView:(id)arg1;

@end

