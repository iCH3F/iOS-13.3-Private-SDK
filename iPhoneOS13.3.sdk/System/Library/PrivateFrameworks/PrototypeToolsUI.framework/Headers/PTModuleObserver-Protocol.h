//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSIndexSet, PTModule;

@protocol PTModuleObserver <NSObject>
- (void)moduleDidReload:(PTModule *)arg1;
- (void)module:(PTModule *)arg1 didInsertRows:(NSArray *)arg2 deleteRows:(NSArray *)arg3;
- (void)module:(PTModule *)arg1 didInsertSections:(NSIndexSet *)arg2 deleteSections:(NSIndexSet *)arg3;
@end
