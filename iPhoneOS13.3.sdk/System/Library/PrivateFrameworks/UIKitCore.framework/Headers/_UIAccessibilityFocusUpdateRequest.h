//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIFocusUpdateRequest.h>

__attribute__((visibility("hidden")))
@interface _UIAccessibilityFocusUpdateRequest : _UIFocusUpdateRequest
{
    long long _options;
}

@property(nonatomic) long long options; // @synthesize options=_options;
- (BOOL)requiresNextFocusedItem;
- (BOOL)shouldPlayFocusSound;

@end

