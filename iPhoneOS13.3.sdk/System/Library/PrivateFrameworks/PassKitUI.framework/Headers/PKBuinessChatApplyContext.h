//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKBusinessChatContext-Protocol.h>

@class NSString;

@interface PKBuinessChatApplyContext : NSObject <PKBusinessChatContext>
{
    NSString *_identifier;
    long long _intent;
}

// - (void).cxx_destruct;
- (id)bodyText;
- (BOOL)requiresAuthorization;
- (id)groupParameters;
- (id)intentParameters;
- (id)businessIdentifier;
- (id)initWithIdentifier:(id)arg1 intent:(long long)arg2;

@end

