//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSTextAttachment, NSURL;
@protocol UICoordinateSpace;

__attribute__((visibility("hidden")))
@interface _UITextItem : NSObject <UITextItem>
{
    id <UICoordinateSpace> _coordinateSpace;
    NSArray *_rects;
    long long _type;
    NSURL *_link;
    NSTextAttachment *_attachment;
    _NSRange _range;
}

@property(retain, nonatomic) NSTextAttachment *attachment; // @synthesize attachment=_attachment;
@property(retain, nonatomic) NSURL *link; // @synthesize link=_link;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) _NSRange range; // @synthesize range=_range;
@property(retain, nonatomic) NSArray *rects; // @synthesize rects=_rects;
@property(retain, nonatomic) id <UICoordinateSpace> coordinateSpace; // @synthesize coordinateSpace=_coordinateSpace;
// - (void).cxx_destruct;

@end

