//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class VideosExtrasSlideshowViewController;

@protocol VideosExtrasSlideshowViewControllerDataSource <NSObject>
- (void)slideshowViewController:(VideosExtrasSlideshowViewController *)arg1 loadImageAtIndex:(NSUInteger)arg2 withCompletionHandler:(void (^)(UIImage *))arg3;
- (NSUInteger)numberOfImagesForSlideshowViewController:(VideosExtrasSlideshowViewController *)arg1;
@end

