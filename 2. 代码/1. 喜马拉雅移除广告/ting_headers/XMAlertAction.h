//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString, NSURL, UIColor, UIImage;

@interface XMAlertAction : NSObject
{
    _Bool _userInteractionEnabled;
    _Bool _switchOn;
    NSString *_title;
    NSAttributedString *_attributedTitle;
    UIImage *_image;
    NSURL *_imageUrl;
    NSString *_subTitle;
    CDUnknownBlockType _switchValueChanged;
    NSString *_tailTitle;
    UIColor *_tailTitleBackgroundColor;
    long long _style;
    CDUnknownBlockType _handler;
}

+ (id)actionWithTitle:(id)arg1 image:(id)arg2 tailTitle:(id)arg3 tailTitleBackgroundColor:(id)arg4 handler:(CDUnknownBlockType)arg5;
+ (id)actionWithTitle:(id)arg1 subTitle:(id)arg2 image:(id)arg3 handler:(CDUnknownBlockType)arg4;
+ (id)actionWithTitle:(id)arg1 image:(id)arg2 handler:(CDUnknownBlockType)arg3;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) UIColor *tailTitleBackgroundColor; // @synthesize tailTitleBackgroundColor=_tailTitleBackgroundColor;
@property(copy, nonatomic) NSString *tailTitle; // @synthesize tailTitle=_tailTitle;
@property(copy, nonatomic) CDUnknownBlockType switchValueChanged; // @synthesize switchValueChanged=_switchValueChanged;
@property(nonatomic) _Bool switchOn; // @synthesize switchOn=_switchOn;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSURL *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) _Bool userInteractionEnabled; // @synthesize userInteractionEnabled=_userInteractionEnabled;
@property(copy, nonatomic) NSAttributedString *attributedTitle; // @synthesize attributedTitle=_attributedTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)dealloc;

@end

