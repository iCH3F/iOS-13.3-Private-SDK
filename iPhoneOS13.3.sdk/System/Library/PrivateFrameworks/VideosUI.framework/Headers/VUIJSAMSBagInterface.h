//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <VideosUI/VUIJSAMSBagDelegate-Protocol.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface VUIJSAMSBagInterface : IKJSObject <VUIJSAMSBagDelegate>
{
}

+ (id)convertNSErrorIntoDict:(id)arg1;
+ (id)generateResponseDictionary:(id)arg1 withError:(id)arg2;
- (void)registerBagKey:(id)arg1 withValueType:(NSUInteger)arg2;
- (void)dictionaryForKeyWithCompletion:(id)arg1:(id)arg2;
- (void)URLForKeyWithCompletion:(id)arg1:(id)arg2;
- (void)stringForKeyWithCompletion:(id)arg1:(id)arg2;
- (void)integerForKeyWithCompletion:(id)arg1:(id)arg2;
- (void)doubleForKeyWithCompletion:(id)arg1:(id)arg2;
- (void)boolForKeyWithCompletion:(id)arg1:(id)arg2;
- (void)arrayForKeyWithCompletion:(id)arg1:(id)arg2;
- (id)dictionaryForKey:(id)arg1;
- (id)URLForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)integerForKey:(id)arg1;
- (id)doubleForKey:(id)arg1;
- (id)boolForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
@property(readonly, nonatomic) NSDictionary *VUIAMSBagValueTypes;

@end

