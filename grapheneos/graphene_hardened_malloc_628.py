"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 628."""

def spec_graphene_hardened_malloc_628() -> dict:
    return {"system": "GrapheneOS", "spec_id": 628, "quarantine_slabs": 5, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_628():
    s = spec_graphene_hardened_malloc_628()
    assert s["spec_id"] == 628
