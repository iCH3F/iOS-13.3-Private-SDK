//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCCacheFlushing-Protocol.h>

@class FCArticleListRecordSource, FCArticleRecordSource, FCCKContentDatabase, FCChannelMembershipController, FCFeedDatabase, FCForYouConfigRecordSource, FCIssueListRecordSource, FCIssueRecordSource, FCPurchaseLookupRecordSource, FCResourceRecordSource, FCTagListRecordSource, FCTagRecordSource, FCWidgetSectionConfigRecordSource, NSArray;
@protocol FCAssetKeyManagerType;

@protocol FCContentContextInternal <NSObject, FCCacheFlushing>
@property(readonly, nonatomic) id <FCAssetKeyManagerType> assetKeyManager;
@property(readonly, nonatomic) FCCKContentDatabase *contentDatabase;
@property(readonly) FCFeedDatabase *feedDatabase;
@property(readonly, nonatomic) NSArray *recordSources;
@property(readonly, nonatomic) FCIssueListRecordSource *issueListRecordSource;
@property(readonly, nonatomic) FCIssueRecordSource *issueRecordSource;
@property(readonly, nonatomic) FCWidgetSectionConfigRecordSource *widgetSectionConfigRecordSource;
@property(readonly, nonatomic) FCForYouConfigRecordSource *forYouConfigRecordSource;
@property(readonly, nonatomic) FCPurchaseLookupRecordSource *purchaseLookupRecordSource;
@property(readonly, nonatomic) FCArticleListRecordSource *articleListRecordSource;
@property(readonly, nonatomic) FCResourceRecordSource *resourceRecordSource;
@property(readonly, nonatomic) FCChannelMembershipController *channelMembershipController;
@property(readonly, nonatomic) FCTagListRecordSource *tagListRecordSource;
@property(readonly, nonatomic) FCTagRecordSource *tagRecordSource;
@property(readonly, nonatomic) FCArticleRecordSource *articleRecordSource;
@end

