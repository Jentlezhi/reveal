//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface XMDubPipCircleView : UIView
{
    double _progress;
    NSArray *_colorList;
}

@property(retain, nonatomic) NSArray *colorList; // @synthesize colorList=_colorList;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)customInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

