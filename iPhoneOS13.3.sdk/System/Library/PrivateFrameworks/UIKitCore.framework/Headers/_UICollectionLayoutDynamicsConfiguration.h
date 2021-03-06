//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UICollectionLayoutDynamicsConfiguration-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutDynamicsConfiguration : NSObject <_UICollectionLayoutDynamicsConfiguration>
{
    NSMutableArray *_dirtyItems;
    NSArray *_items;
    NSMutableDictionary *_behaviorDict;
    CGRect _previousVisibleBounds;
    CGRect _currentVisibleBounds;
}

@property(retain, nonatomic) NSMutableDictionary *behaviorDict; // @synthesize behaviorDict=_behaviorDict;
@property(nonatomic) CGRect currentVisibleBounds; // @synthesize currentVisibleBounds=_currentVisibleBounds;
@property(nonatomic) CGRect previousVisibleBounds; // @synthesize previousVisibleBounds=_previousVisibleBounds;
// - (void).cxx_destruct;
- (id)_dirtyItems;
- (void)_reset;
- (void)_setBehaviors:(id)arg1 forItem:(id)arg2;
@property(retain, nonatomic) NSArray *dynamicItems;
- (void)setBehaviors:(id)arg1 forItem:(id)arg2;
- (id)behaviorsForItem:(id)arg1;
- (id)init;

@end

