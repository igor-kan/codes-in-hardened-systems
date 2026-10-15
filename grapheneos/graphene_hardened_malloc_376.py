"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 376."""

def spec_graphene_hardened_malloc_376() -> dict:
    return {"system": "GrapheneOS", "spec_id": 376, "quarantine_slabs": 9, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_376():
    s = spec_graphene_hardened_malloc_376()
    assert s["spec_id"] == 376
