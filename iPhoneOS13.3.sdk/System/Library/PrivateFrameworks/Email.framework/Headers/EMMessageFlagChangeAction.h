//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Email/EMMessageChangeAction.h>

@class ECMessageFlagChange;

@interface EMMessageFlagChangeAction : EMMessageChangeAction
{
    ECMessageFlagChange *_flagChange;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) ECMessageFlagChange *flagChange; // @synthesize flagChange=_flagChange;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)signpostType;
- (id)initWithMessageListItems:(id)arg1 flagChange:(id)arg2;

@end

