//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UISlider.h>

@protocol XMShortVideoProgressSliderDelegate;

@interface XMShortVideoProgressSlider : UISlider
{
    id <XMShortVideoProgressSliderDelegate> _sliderDelegate;
}

@property(nonatomic) __weak id <XMShortVideoProgressSliderDelegate> sliderDelegate; // @synthesize sliderDelegate=_sliderDelegate;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end

