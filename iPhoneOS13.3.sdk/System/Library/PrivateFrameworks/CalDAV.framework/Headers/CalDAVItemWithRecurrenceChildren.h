//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CalDAVItemWithRecurrenceChildren : CoreDAVItem
{
    NSMutableSet *_recurrences;
}

@property(retain, nonatomic) NSMutableSet *recurrences; // @synthesize recurrences=_recurrences;
// - (void).cxx_destruct;
- (id)copyParseRules;
- (void)addRecurrence:(id)arg1;

@end

