//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class DDScannerResult, NSDictionary, NSString;

@protocol DDParsecServiceVCInterface
- (void)appDidEnterBackground;
- (void)appWillEnterForeground;
- (void)setDDViewScale:(double)arg1;
- (void)setDDViewStyle:(long long)arg1;
- (void)setTitle:(NSString *)arg1;
- (void)setSheetMode:(BOOL)arg1;
- (void)setPreviewMode:(BOOL)arg1;
- (void)startQueryWithResult:(DDScannerResult *)arg1 context:(NSDictionary *)arg2;
- (void)startQueryWithString:(NSString *)arg1 range:(_NSRange)arg2;
@end

