//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SKUIComposeTextFieldConfiguration, SKUIComposeTextFieldListView;

@protocol SKUIComposeTextFieldListViewDelegate <NSObject>
- (SKUIComposeTextFieldConfiguration *)textFieldList:(SKUIComposeTextFieldListView *)arg1 configurationForFieldAtIndex:(NSUInteger)arg2;
- (long long)numberOfFieldsInTextFieldList:(SKUIComposeTextFieldListView *)arg1;
- (long long)numberOfColumnsInTextFieldList:(SKUIComposeTextFieldListView *)arg1;

@optional
- (void)textFieldListValuesDidChange:(SKUIComposeTextFieldListView *)arg1;
- (void)textFieldListValidityDidChange:(SKUIComposeTextFieldListView *)arg1;
@end

