//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, UIColor;

@interface AVTMaterial : NSObject
{
    UIColor baseColor;
    NSDictionary *secondaryColors;
}

+ (id)materialWithColor:(UIColor )arg1;
@property(retain) NSDictionary *secondaryColors; // @synthesize secondaryColors;
@property(retain) UIColor *baseColor; // @synthesize baseColor;
// - (void).cxx_destruct;
- (void)applyToSceneKitMaterial:(id)arg1;
- (BOOL)_decode:(id)arg1;
- (void)_encode:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;

@end

