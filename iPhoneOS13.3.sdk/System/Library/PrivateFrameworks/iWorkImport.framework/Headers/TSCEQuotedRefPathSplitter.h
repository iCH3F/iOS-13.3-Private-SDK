//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface TSCEQuotedRefPathSplitter : NSObject
{
    NSMutableArray *_quotedComponents;
    NSString *_localizedBlankGroupName;
    NSString *_localizedErrorGroupName;
    NSString *_localizedTrueGroupName;
    NSString *_localizedFalseGroupName;
    NSString *_localizedTrueGroupNameForColumn;
    NSString *_localizedFalseGroupNameForColumn;
}

+ (BOOL)isRightParen:(id)arg1;
+ (BOOL)isLeftParen:(id)arg1;
+ (BOOL)isColon:(id)arg1;
+ (BOOL)isDollar:(id)arg1;
+ (BOOL)isSingleQuotePair:(id)arg1 ch2:(id)arg2;
+ (BOOL)isSingleQuote:(id)arg1;
@property(retain, nonatomic) NSString *localizedFalseGroupNameForColumn; // @synthesize localizedFalseGroupNameForColumn=_localizedFalseGroupNameForColumn;
@property(retain, nonatomic) NSString *localizedTrueGroupNameForColumn; // @synthesize localizedTrueGroupNameForColumn=_localizedTrueGroupNameForColumn;
@property(retain, nonatomic) NSString *localizedFalseGroupName; // @synthesize localizedFalseGroupName=_localizedFalseGroupName;
@property(retain, nonatomic) NSString *localizedTrueGroupName; // @synthesize localizedTrueGroupName=_localizedTrueGroupName;
@property(retain, nonatomic) NSString *localizedErrorGroupName; // @synthesize localizedErrorGroupName=_localizedErrorGroupName;
@property(retain, nonatomic) NSString *localizedBlankGroupName; // @synthesize localizedBlankGroupName=_localizedBlankGroupName;
// - (void).cxx_destruct;
- (id)description;
- (id)componentAtIndex:(NSUInteger)arg1;
- (NSUInteger)numComponents;
- (void)addComponent:(id)arg1;
- (void)splitRefPath:(id)arg1;
- (id)initWithComponents:(id)arg1 aggregateFunction:(id)arg2;
- (id)initWithReferenceString:(id)arg1;

@end

