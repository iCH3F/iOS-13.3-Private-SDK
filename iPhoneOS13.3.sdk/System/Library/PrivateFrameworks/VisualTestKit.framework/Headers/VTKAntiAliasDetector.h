//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class VTKBitmapContext;
@protocol VTKColorDifferenceStrategy;

__attribute__((visibility("hidden")))
@interface VTKAntiAliasDetector : NSObject
{
    VTKBitmapContext *_leftContext;
    VTKBitmapContext *_rightContext;
    id <VTKColorDifferenceStrategy> _strategy;
}

@property(retain, nonatomic) id <VTKColorDifferenceStrategy> strategy; // @synthesize strategy=_strategy;
@property(retain, nonatomic) VTKBitmapContext *rightContext; // @synthesize rightContext=_rightContext;
@property(retain, nonatomic) VTKBitmapContext *leftContext; // @synthesize leftContext=_leftContext;
// - (void).cxx_destruct;
- (BOOL)isAntiAliasedAtPointHelper:(struct VTKPoint)arg1 leftContext:(id)arg2 rightContext:(id)arg3;
- (BOOL)isAntiAliasedAtPoint:(struct VTKPoint)arg1;
- (id)initWithLeftContext:(id)arg1 rightContext:(id)arg2 strategy:(id)arg3;

@end

