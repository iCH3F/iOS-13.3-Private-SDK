//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@protocol UIVectorOperatable;

__attribute__((visibility("hidden")))
@interface _UIViewPropertyInfo : NSObject <NSCopying>
{
    id <UIVectorOperatable> _previousValue;
    id <UIVectorOperatable> _value;
}

+ (id)viewPropertyInfoWithValue:(id)arg1 previousValue:(id)arg2;
@property(retain, nonatomic) id <UIVectorOperatable> value; // @synthesize value=_value;
@property(retain, nonatomic) id <UIVectorOperatable> previousValue; // @synthesize previousValue=_previousValue;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;

@end

