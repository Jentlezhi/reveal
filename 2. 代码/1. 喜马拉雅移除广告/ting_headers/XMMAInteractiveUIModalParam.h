//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface XMMAInteractiveUIModalParam : NSObject
{
    _Bool _showCancel;
    NSString *_title;
    NSString *_content;
    NSString *_cancelText;
    NSString *_cancelColor;
    NSString *_confirmText;
    NSString *_confirmColor;
}

@property(copy, nonatomic) NSString *confirmColor; // @synthesize confirmColor=_confirmColor;
@property(copy, nonatomic) NSString *confirmText; // @synthesize confirmText=_confirmText;
@property(copy, nonatomic) NSString *cancelColor; // @synthesize cancelColor=_cancelColor;
@property(copy, nonatomic) NSString *cancelText; // @synthesize cancelText=_cancelText;
@property(nonatomic) _Bool showCancel; // @synthesize showCancel=_showCancel;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

