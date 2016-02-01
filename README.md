qt_learn
===========
learning qt 4.8.6





OOP reviews
=============

#### Composition 
is a design concept, not really a pattern. This term is used when you want to describe one object containing another one(s). Composition implies strong ownership, which means children lives are managed by parents. If there is no such strong relationship, we are taling about aggregation.

#### Composite Pattern
is a GoF design pattern describing a parent-child strong relationship where the child can be a simple node or a container of other nodes (possibly containing other children).

It is very common in GUI and tree like structure. E.g. in Java Swing a JPanel can hold various controls like text fields, labels, lists, etc. but it can also hold other JPanels which, in turn, can contain simple components and even more nested panels.

Typically Composite design pattern uses composition, however in some cases the parent does not have to own all children. To continue GUI example, you can take one panel and move it to another place (change the parent).

## Creational Patterns

#### Abstract Factory Pattern
emphasises object creation operations for families of related objects, where each family is a set classes derived from a common base. Each object is returned immediately as a result of one call.

#### Builder Pattern 
focuses on constructing a complex object step by step; formulates the logic of how to put together a complex object; often builds a Composite
* **Builder** object encapsulates configuration of the complex object, returns the product as a final step,
* **Director** object knows the protocol of using the Builder, where the protocol defines all logical steps required to build the complex object.

> Often, designs start out using Factory Method (less complicated, more customizable, subclasses proliferate) and evolve toward Abstract Factory, Prototype, or Builder (more flexible, more complex) as the designer discovers where more flexibility is needed.
>
> Sometimes creational patterns are complementary: Builder can use one of the other patterns to implement which components get built. Abstract Factory, Builder, and Prototype can use Singleton in their implementations.
