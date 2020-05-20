//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

#import <NewsCore/FCKeyValueStoreCoding-Protocol.h>

@interface NSString (FCKVSCoding) <FCKeyValueStoreCoding>
+ (id)readValueFromKeyValuePair:(id)arg1;
+ (int)keyValuePairType;
+ (id)fc_hardPaywallArticleIDWithArticleID:(id)arg1;
+ (BOOL)fc_string:(id)arg1 isEqualToString:(id)arg2;
+ (id)stringWithValue:(id)arg1;
+ (id)fc_string:(id /* CDUnknownBlockType */)arg1;
- (void)writeToKeyValuePair:(id)arg1;
- (id)_FCCKPIdentifierWithType:(int)arg1;
- (BOOL)fc_isValidColorHexString;
- (NSUInteger)fc_unsignedLongLongValue;
- (BOOL)fc_isValidTagID;
- (BOOL)fc_isValidHardPaywallArticleID;
- (BOOL)fc_isValidIssueID;
- (BOOL)fc_isValidArticleID;
- (BOOL)fc_isValidCloudKitIDWithPrefix:(id)arg1;
- (BOOL)fc_isValidCloudKitID;
- (id)fc_numberFollowingString:(id)arg1;
- (id)fc_stringByAppendingStringIfNeeded:(id)arg1;
- (id)fc_stringByPrefixingLinesWithString:(id)arg1;
- (id)fc_stringByReplacingOccurrencesOfStrings:(id)arg1 withString:(id)arg2;
- (id)fc_stringByMultiplyingStringByCount:(NSUInteger)arg1;
- (id)fc_stringByReplacingPrefix:(id)arg1 withString:(id)arg2;
- (id)stringByRemovingCharactersInSet:(id)arg1;
- (id)fc_stringByRemovingPunctuation;
- (id)fc_stringByTrimmingWhiteSpace;
- (id)tokenizedLowerCaseStringWithMinimumLength:(NSUInteger)arg1;
- (id)fc_lowercaseTokensWithMinimumLength:(NSUInteger)arg1;
@property(readonly, nonatomic) _NSRange range;
@end

