//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIImage;

@interface SUScriptCanvasResult : NSObject
{
    UIImage *_image;
    CGPath _path;
}

@property(readonly, nonatomic) CGPath canvasPath; // @synthesize canvasPath=_path;
@property(readonly, nonatomic) UIImage *canvasImage; // @synthesize canvasImage=_image;
- (void)dealloc;
- (id)_initWithCanvas:(id)arg1;

@end

