//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class CALayer;

__attribute__((visibility("hidden")))
@interface _UISpringLoadedBlinkingEffect : NSObject <UISpringLoadedInteractionEffect>
{
    CALayer *_blinkLayer;
}

@property(retain, nonatomic) CALayer *blinkLayer; // @synthesize blinkLayer=_blinkLayer;
// - (void).cxx_destruct;
- (id)blinkAnimation;
- (void)_prepareLayer:(id)arg1 forView:(id)arg2;
- (void)interaction:(id)arg1 didChangeWithContext:(id)arg2;

@end

