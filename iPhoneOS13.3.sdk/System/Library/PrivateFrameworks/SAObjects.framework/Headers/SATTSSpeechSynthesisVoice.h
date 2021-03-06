//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString;

@interface SATTSSpeechSynthesisVoice : AceObject <SAAceSerializable>
{
}

+ (id)speechSynthesisVoiceWithDictionary:(id)arg1 context:(id)arg2;
+ (id)speechSynthesisVoice;
@property(nonatomic) BOOL useServer;
@property(copy, nonatomic) NSString *type;
@property(copy, nonatomic) NSString *quality;
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) NSString *languageCode;
@property(copy, nonatomic) NSString *keyString;
@property(copy, nonatomic) NSString *gender;
@property(copy, nonatomic) NSString *contentVersion;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

