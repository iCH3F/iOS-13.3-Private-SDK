//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren;

@interface CalDAVCalendarServerAllowedSharingModesItem : CoreDAVItem
{
    CoreDAVItemWithNoChildren *_canBePublished;
    CoreDAVItemWithNoChildren *_canBeShared;
    CoreDAVItemWithNoChildren *_isMarkedUndeletable;
    CoreDAVItemWithNoChildren *_isMarkedImmutableSharees;
}

@property(retain, nonatomic) CoreDAVItemWithNoChildren *isMarkedImmutableSharees; // @synthesize isMarkedImmutableSharees=_isMarkedImmutableSharees;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *isMarkedUndeletable; // @synthesize isMarkedUndeletable=_isMarkedUndeletable;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *canBeShared; // @synthesize canBeShared=_canBeShared;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *canBePublished; // @synthesize canBePublished=_canBePublished;
// - (void).cxx_destruct;
- (id)copyParseRules;
- (id)init;

@end
