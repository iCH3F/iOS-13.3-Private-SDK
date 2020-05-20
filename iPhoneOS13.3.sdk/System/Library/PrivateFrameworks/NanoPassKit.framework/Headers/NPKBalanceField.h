//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoPassKit/NPKBalanceField-Protocol.h>

@class NSString;

@interface NPKBalanceField : NSObject <NPKBalanceField>
{
    BOOL _isPrimaryBalance;
    NSString *_label;
    NSString *_formattedValue;
    NSString *_identifier;
}

@property(readonly, nonatomic) BOOL isPrimaryBalance; // @synthesize isPrimaryBalance=_isPrimaryBalance;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *formattedValue; // @synthesize formattedValue=_formattedValue;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
- (id)initWithLabel:(id)arg1 formattedValue:(id)arg2 identifier:(id)arg3;
- (id)initWithLabel:(id)arg1 formattedValue:(id)arg2 identifier:(id)arg3 primaryBalance:(BOOL)arg4;

@end

