//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class AFBulletin, AceObject, NSString, NSURL;

@protocol AFSpeakableNamespaceProvider <NSObject>
- (NSString *)stringForExpression:(NSString *)arg1;

@optional
- (NSURL *)attachmentURLForExpression:(NSString *)arg1;
- (void)setAssistantBulletin:(AFBulletin *)arg1;
- (NSString *)identifier;
- (id)initWithAceObject:(AceObject *)arg1;
- (NSString *)stringForExpression:(NSString *)arg1 containsPrivacySensitiveContents:(BOOL )arg2;
@end

