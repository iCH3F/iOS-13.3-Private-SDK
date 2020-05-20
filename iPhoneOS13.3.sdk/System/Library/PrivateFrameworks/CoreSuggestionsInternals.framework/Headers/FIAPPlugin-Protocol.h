//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CSSearchableItem, CSUserAction, FIAPResult, INInteraction, NSArray, NSString;

@protocol FIAPPlugin <NSObject>
@property(readonly, nonatomic) NSString *identifier;

@optional
- (void)deleteSpotlightReferencesWithBundleIdentifier:(NSString *)arg1;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(NSString *)arg1 domainIdentifiers:(NSArray *)arg2;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(NSString *)arg1 uniqueIdentifiers:(NSArray *)arg2;
- (void)purgeSpotlightReferencesWithBundleIdentifier:(NSString *)arg1 uniqueIdentifiers:(NSArray *)arg2;
- (FIAPResult *)processInteraction:(INInteraction *)arg1 bundleIdentifier:(NSString *)arg2 protectionClass:(NSString *)arg3;
- (FIAPResult *)processUserAction:(CSUserAction *)arg1 searchableItem:(CSSearchableItem *)arg2;
- (FIAPResult *)processSearchableItem:(CSSearchableItem *)arg1;
- (FIAPResult *)setup;
@end

