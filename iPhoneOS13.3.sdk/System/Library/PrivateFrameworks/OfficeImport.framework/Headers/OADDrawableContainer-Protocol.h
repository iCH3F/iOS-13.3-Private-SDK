//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, OADDrawable;

@protocol OADDrawableContainer <NSObject>
- (void)removeChild:(OADDrawable *)arg1;
- (void)replaceChild:(OADDrawable *)arg1 with:(OADDrawable *)arg2;
- (NSArray *)children;
- (OADDrawable *)childAtIndex:(NSUInteger)arg1;
- (void)addChildren:(NSArray *)arg1;
- (void)addChild:(OADDrawable *)arg1;
- (NSUInteger)childCount;
- (void)setLogicalBounds:(CGRect)arg1;
- (CGRect)logicalBounds;
@end

