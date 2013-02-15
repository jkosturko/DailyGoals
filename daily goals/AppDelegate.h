//
//  AppDelegate.h
//  daily goals
//
//  Created by Kosturko, Jessica on 2/14/13.
//  Copyright (c) 2013 Kosturko, Jessica. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate> {
    NSMutableDictionary *myDictionary;
    NSMutableDictionary *dateSpecObject;
    NSMutableDictionary *textObject;
    NSString *curDate;
}
@property (weak) IBOutlet NSTextField *dateLabel;

- (IBAction)triggerCheckBox:(NSButton *)sender;
- (IBAction)textEvent:(NSTextField *)sender;

@property (strong) IBOutlet NSTextField *text3;
@property (strong) IBOutlet NSTextField *text2;
@property (strong) IBOutlet NSTextField *text1;

@end

