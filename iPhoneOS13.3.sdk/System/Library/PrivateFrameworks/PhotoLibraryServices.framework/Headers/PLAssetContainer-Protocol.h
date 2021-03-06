//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLDiagnosticsProvider-Protocol.h>

@class NSArray, NSDate, NSOrderedSet, NSString, PLManagedAsset;

@protocol PLAssetContainer <NSObject, PLDiagnosticsProvider>
@property(readonly, copy, nonatomic) NSArray *localizedLocationNames;
@property(readonly, nonatomic) BOOL canShowAvalancheStacks;
@property(readonly, nonatomic) BOOL canShowComments;
@property(retain, nonatomic) PLManagedAsset *tertiaryKeyAsset;
@property(retain, nonatomic) PLManagedAsset *secondaryKeyAsset;
@property(retain, nonatomic) PLManagedAsset *keyAsset;
@property(readonly, nonatomic) BOOL isEmpty;
@property(readonly, nonatomic) NSUInteger videosCount;
@property(readonly, nonatomic) NSUInteger photosCount;
@property(readonly, nonatomic) NSUInteger assetsCount;
@property(readonly, nonatomic) NSUInteger approximateCount;
@property(readonly, retain, nonatomic) NSOrderedSet *assets;
@property(readonly, copy, nonatomic) NSString *localizedTitle;
@property(readonly, retain, nonatomic) NSString *title;
@property(readonly, retain, nonatomic) NSString *uuid;
- (BOOL)canPerformEditOperation:(NSUInteger)arg1;

@optional
@property(readonly, retain, nonatomic) NSDate *endDate;
@property(readonly, retain, nonatomic) NSDate *startDate;
@end

