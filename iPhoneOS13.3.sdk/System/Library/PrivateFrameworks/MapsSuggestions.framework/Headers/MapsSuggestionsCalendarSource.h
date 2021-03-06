//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSuggestions/MapsSuggestionsBaseSource.h>

#import <MapsSuggestions/MapsSuggestionsPreloadableSource-Protocol.h>

@class EKCalendarVisibilityManager, EKEventStore, MapsSuggestionsCanKicker, MapsSuggestionsNetworkRequester, NSMutableDictionary, NSObject, NSSet, NSString;
@protocol OS_dispatch_queue;

@interface MapsSuggestionsCalendarSource : MapsSuggestionsBaseSource <MapsSuggestionsPreloadableSource>
{
    BOOL _suspended;
    EKEventStore *_eventStore;
    EKCalendarVisibilityManager *_calVisibilityManager;
    NSObject<OS_dispatch_queue> *_fimQueue;
    NSMutableDictionary *_handleToGEOMapItemMapping;
    NSString *_siriFoundThisString;
    MapsSuggestionsNetworkRequester *_requester;
    NSSet *_setOfEventReservationSubtypes;
    MapsSuggestionsCanKicker *_changedNotificationCanKicker;
}

+ (NSUInteger)disposition;
+ (BOOL)isEnabled;
@property(retain, nonatomic) MapsSuggestionsCanKicker *changedNotificationCanKicker; // @synthesize changedNotificationCanKicker=_changedNotificationCanKicker;
@property(retain, nonatomic) NSSet *setOfEventReservationSubtypes; // @synthesize setOfEventReservationSubtypes=_setOfEventReservationSubtypes;
@property(retain, nonatomic) MapsSuggestionsNetworkRequester *requester; // @synthesize requester=_requester;
@property(retain, nonatomic) NSString *siriFoundThisString; // @synthesize siriFoundThisString=_siriFoundThisString;
@property(retain, nonatomic) NSMutableDictionary *handleToGEOMapItemMapping; // @synthesize handleToGEOMapItemMapping=_handleToGEOMapItemMapping;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *fimQueue; // @synthesize fimQueue=_fimQueue;
@property(retain, nonatomic) EKCalendarVisibilityManager *calVisibilityManager; // @synthesize calVisibilityManager=_calVisibilityManager;
@property(retain, nonatomic) EKEventStore *eventStore; // @synthesize eventStore=_eventStore;
@property BOOL suspended; // @synthesize suspended=_suspended;
// - (void).cxx_destruct;
- (void)dealloc;
- (BOOL)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(id /* CDUnknownBlockType */)arg3;
- (BOOL)canProduceEntriesOfType:(long long)arg1;
- (id)_predicateForPeriod:(NSDateInterval )arg1;
- (long long)_entryTypeFromSchema:(id)arg1;
- (BOOL)_addRestaurantReservationFieldsToEntry:(id)arg1 fromSchemaOrgDictionary:(id)arg2 event:(id)arg3;
- (BOOL)_addCalendarEventFieldsToEntry:(id)arg1 event:(id)arg2;
- (BOOL)_addTicketedEventFieldsToEntry:(id)arg1 fromSchemaOrgDictionary:(id)arg2 event:(id)arg3;
- (BOOL)_addCarRentalFieldsToEntry:(id)arg1 event:(id)arg2;
- (BOOL)_addHotelFieldsToEntry:(id)arg1 fromSchemaOrgDictionary:(id)arg2 event:(id)arg3;
- (BOOL)_addTravelFlightFieldsToEntry:(id)arg1 fromSchemaOrgDictionary:(id)arg2 event:(id)arg3;
- (BOOL)_createEntriesWithinPeriod:(NSDateInterval )arg1 location:(id)arg2 handler:(id /* CDUnknownBlockType */)arg3;
- (BOOL)suggestionsEntriesAtLocation:(id)arg1 period:(NSDateInterval )arg2 handler:(id /* CDUnknownBlockType */)arg3;
- (double)updateSuggestionEntries;
- (void)stop;
- (void)_callUpdateSuggestionEntries;
- (void)start;
- (void)eventStoreDidChange:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

