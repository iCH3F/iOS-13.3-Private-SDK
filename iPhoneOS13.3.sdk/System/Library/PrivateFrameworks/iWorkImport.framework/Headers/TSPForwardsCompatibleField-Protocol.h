//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class TSPArchiver, TSPUnarchiver;

@protocol TSPForwardsCompatibleField
@property(readonly, nonatomic) BOOL hasUnknownValues;
@property(readonly, nonatomic) BOOL hasKnownValues;
- (void)mergeToMessage:(struct Message )arg1 reflection:(const struct Reflection )arg2;
- (void)mergeToUnknownFieldSet:(struct UnknownFieldSet )arg1;
- (void)updateMessageInfo:(struct MessageInfo )arg1;
- (void)saveToArchiver:(TSPArchiver *)arg1;
- (void)loadFromUnarchiver:(TSPUnarchiver *)arg1;
- (const struct FieldInfo )fieldInfo;
@end

