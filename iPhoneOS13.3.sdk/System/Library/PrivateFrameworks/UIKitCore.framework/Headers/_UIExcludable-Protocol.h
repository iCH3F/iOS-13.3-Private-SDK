//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString;
@protocol _UIExcludable;

@protocol _UIExcludable <NSObject>
- (NSString *)_briefDescription;
- (void)_exclude;
- (BOOL)_isExcludedByExcludable:(id <_UIExcludable>)arg1;
- (BOOL)_canExcludeOtherExcludables;
@end
