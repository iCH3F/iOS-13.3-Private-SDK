//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PersonalizationPortraitInternals/PPConnectionsSource.h>

#import <PersonalizationPortraitInternals/PPConnectionsLocationSource-Protocol.h>

@protocol SGSuggestionsServiceURLsProtocol;

@interface PPConnectionsFoundInAppsSource : PPConnectionsSource <PPConnectionsLocationSource>
{
    id <SGSuggestionsServiceURLsProtocol> _fiaURLService;
}

+ (id)identifier;
+ (id)sharedInstance;
// - (void).cxx_destruct;
- (id)locationItemsWithCriteria:(id)arg1 earliest:(id)arg2 latest:(id)arg3 limit:(NSUInteger)arg4 consumer:(NSUInteger)arg5 explanationSet:(id)arg6;
- (id)init;
- (id)initWithFoundInAppsService:(id)arg1;

@end

