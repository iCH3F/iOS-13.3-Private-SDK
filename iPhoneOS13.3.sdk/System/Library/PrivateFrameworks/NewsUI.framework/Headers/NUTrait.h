//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSMutableDictionary;

@interface NUTrait : NSObject <NSCopying>
{
    double _defaultValue;
    NSMutableDictionary *_traitBlocks;
}

@property(readonly, nonatomic) NSMutableDictionary *traitBlocks; // @synthesize traitBlocks=_traitBlocks;
@property(readonly, nonatomic) double defaultValue; // @synthesize defaultValue=_defaultValue;
// - (void).cxx_destruct;
- (double)valueForTraitCollection:(id)arg1 size:(CGSize)arg2 deviceTrait:(id)arg3;
- (double)valueForTraitCollection:(id)arg1 size:(CGSize)arg2;
- (id)when:(NSUInteger)arg1 block:(id /* CDUnknownBlockType */)arg2;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithDefaultValue:(double)arg1;
- (id)init;

@end

