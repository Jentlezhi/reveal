//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class UIColor;

@interface WBVideoDanmakuLabel : UILabel
{
    double _strokeWidth;
    UIColor *_strokeColor;
}

@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(nonatomic) double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
- (void).cxx_destruct;
- (void)drawTextInRect:(struct CGRect)arg1;
- (void)configureWithParams:(id)arg1;
- (void)dealloc;

@end

