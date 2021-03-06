//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMCore/IMTranscriptChatItem.h>

#import <IMCore/IMPluginChatItemProtocol-Protocol.h>

@class IMBalloonPluginDataSource, NSString;

@interface IMTranscriptPluginBreadcrumbChatItem : IMTranscriptChatItem <IMPluginChatItemProtocol>
{
    IMBalloonPluginDataSource *_dataSource;
    NSString *_rawStatusText;
    NSString *_statusText;
    NSUInteger _optionFlags;
}

@property(readonly, nonatomic) NSUInteger optionFlags; // @synthesize optionFlags=_optionFlags;
@property(readonly, nonatomic) NSString *statusText; // @synthesize statusText=_statusText;
@property(readonly, nonatomic) NSString *rawStatusText; // @synthesize rawStatusText=_rawStatusText;
@property(retain, nonatomic) IMBalloonPluginDataSource *dataSource; // @synthesize dataSource=_dataSource;
// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isFromMe;
@property(readonly, retain, nonatomic) NSString *type;
- (void)configureStatusTextWithAccount:(id)arg1;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (id)_initWithItem:(id)arg1 datasource:(id)arg2 statusText:(id)arg3 optionFlags:(NSUInteger)arg4;

@end

