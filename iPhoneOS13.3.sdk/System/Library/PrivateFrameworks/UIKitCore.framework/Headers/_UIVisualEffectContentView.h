//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIVisualEffectSubview.h>

__attribute__((visibility("hidden")))
@interface _UIVisualEffectContentView : _UIVisualEffectSubview
{
    BOOL _disableGroupFiltering;
    BOOL _currentlyDisplayingRequestedEffects;
}

- (id)description;
- (void)willRemoveSubview:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (void)applyIdentityFilterEffects;
- (void)applyRequestedFilterEffects;
- (void)setFilters:(id)arg1;
- (void)setDisableGroupFiltering:(BOOL)arg1;
- (BOOL)disableGroupFiltering;
- (id)initWithFrame:(CGRect)arg1;

@end

