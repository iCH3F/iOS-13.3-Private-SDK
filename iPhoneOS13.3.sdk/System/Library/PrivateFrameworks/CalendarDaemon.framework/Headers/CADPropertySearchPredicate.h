//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarDaemon/CADPredicate.h>

#import <CalendarDaemon/EKDefaultPropertiesLoading-Protocol.h>

@class CADObjectID, NSArray;

@interface CADPropertySearchPredicate : CADPredicate <EKDefaultPropertiesLoading>
{
    int _entityType;
    NSArray *_filters;
    NSArray *_calendarRowIDs;
    CADObjectID *_sourceID;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) CADObjectID *sourceID; // @synthesize sourceID=_sourceID;
@property(readonly, nonatomic) NSArray *calendarRowIDs; // @synthesize calendarRowIDs=_calendarRowIDs;
@property(readonly, nonatomic) NSArray *filters; // @synthesize filters=_filters;
@property(readonly, nonatomic) int entityType; // @synthesize entityType=_entityType;
// - (void).cxx_destruct;
- (id)defaultPropertiesToLoad;
- (BOOL)shouldLoadDefaultProperties;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)validate;
- (id)initWithEntityType:(int)arg1 filters:(id)arg2 calendars:(id)arg3 source:(id)arg4;
- (id)initWithEntityType:(int)arg1 filters:(id)arg2 calendars:(id)arg3;
- (id)initWithEntityType:(int)arg1 filters:(id)arg2 source:(id)arg3;
- (id)initWithEntityType:(int)arg1 filters:(id)arg2 calendar:(id)arg3;
- (id)predicateFormat;
- (id)copyMatchingItemsWithDatabase:(struct CalDatabase )arg1;
- (id)buildWhereClauseWithValues:(id)arg1 andTypes:(id)arg2;
- (id)extendWhereClauseWithCalendarOrSourceLimitation:(id)arg1 withValues:(id)arg2 andTypes:(id)arg3;
- (id)extendWhereClauseWithEntityTypeLimitation:(id)arg1 withValues:(id)arg2 andTypes:(id)arg3;

@end

