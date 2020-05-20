//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EFLoggable-Protocol.h>

@class EDUbiquitousConversationManager;
@protocol EDConversationDailyCloudExporterDelegate;

@interface EDConversationDailyiCloudExporter : NSObject <EFLoggable>
{
    id <EDConversationDailyCloudExporterDelegate> _delegate;
    EDUbiquitousConversationManager *_conversationManager;
}

+ (id)log;
@property(readonly, nonatomic) EDUbiquitousConversationManager *conversationManager; // @synthesize conversationManager=_conversationManager;
@property(readonly, nonatomic) id <EDConversationDailyCloudExporterDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)run;
- (id)initWithDelegate:(id)arg1 conversationManager:(id)arg2;

@end

