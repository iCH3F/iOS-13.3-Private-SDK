//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSIndexSet, PTSection;

@protocol PTSectionObserver <NSObject>
- (void)sectionDidReload:(PTSection *)arg1;
- (void)section:(PTSection *)arg1 didInsertRows:(NSIndexSet *)arg2 deleteRows:(NSIndexSet *)arg3;
@end

